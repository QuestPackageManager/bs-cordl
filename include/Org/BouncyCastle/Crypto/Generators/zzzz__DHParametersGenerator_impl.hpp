#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DHParametersGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::*)(int32_t, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33d5ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator.GenerateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::GenerateParameters)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x33d5ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33d65d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_get_certainty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_get_certainty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr void Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_set_certainty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certainty = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline void Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::Init(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, certainty, random);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::GenerateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator* Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator::DHParametersGenerator() {}
