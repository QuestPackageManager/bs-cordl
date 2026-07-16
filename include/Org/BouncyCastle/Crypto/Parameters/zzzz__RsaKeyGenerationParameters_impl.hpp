#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RsaKeyGenerationParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3413228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.get_PublicExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_PublicExponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), { "get_PublicExponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.get_Certainty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_Certainty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), { "get_Certainty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3413270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x341332c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__cordl_internal_get_publicExponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicExponent;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__cordl_internal_get_publicExponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicExponent;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__cordl_internal_set_publicExponent(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicExponent = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__cordl_internal_get_certainty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__cordl_internal_get_certainty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__cordl_internal_set_certainty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certainty = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                     int32_t strength, int32_t certainty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicExponent, random, strength, certainty);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_PublicExponent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), { "get_PublicExponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_Certainty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), { "get_Certainty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                            int32_t strength, int32_t certainty) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*>(publicExponent, random, strength, certainty));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::RsaKeyGenerationParameters() {}
