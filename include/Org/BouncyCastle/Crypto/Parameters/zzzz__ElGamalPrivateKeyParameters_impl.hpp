#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ElGamalPrivateKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3412d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters.get_X
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::get_X)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3412de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(), { "get_X", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3412df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3412e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(),
                                                             { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3412ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::__cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* x,
                                                                                      ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, parameters);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::get_X() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(), { "get_X", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(),
                                                           { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*>(x, parameters));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::ElGamalPrivateKeyParameters() {}
