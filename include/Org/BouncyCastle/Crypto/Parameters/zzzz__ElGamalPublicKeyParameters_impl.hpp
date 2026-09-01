#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ElGamalPublicKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3412f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3412f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3412f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3413048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(),
                                                             { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x34130a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::__cordl_internal_set_y(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y, parameters);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::get_Y() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(),
                                                           { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*>(y, parameters));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::ElGamalPublicKeyParameters() {}
