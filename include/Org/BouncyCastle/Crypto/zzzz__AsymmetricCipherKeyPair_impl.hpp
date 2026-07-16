#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/AsymmetricCipherKeyPair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3499ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair.get_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)()>(
    &::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Public)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3499f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), { "get_Public", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair.get_Private
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)()>(
    &::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Private)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3499f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), { "get_Private", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__cordl_internal_get_publicParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicParameter;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__cordl_internal_get_publicParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicParameter;
}
constexpr void Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__cordl_internal_set_publicParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicParameter = value;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__cordl_internal_get_privateParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateParameter;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__cordl_internal_get_privateParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateParameter;
}
constexpr void Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__cordl_internal_set_privateParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateParameter = value;
}
inline void Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter,
                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicParameter, privateParameter);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Public() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), { "get_Public", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Private() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), { "get_Private", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter,
                                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(publicParameter, privateParameter));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::AsymmetricCipherKeyPair() {}
