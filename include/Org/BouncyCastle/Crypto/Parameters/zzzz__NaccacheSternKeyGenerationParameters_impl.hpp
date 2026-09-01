#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\NaccacheSternKeyGenerationParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3414dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, int32_t, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3414e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters.get_Certainty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::get_Certainty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(), { "get_Certainty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters.get_CountSmallPrimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::get_CountSmallPrimes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(), { "get_CountSmallPrimes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters.get_IsDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::get_IsDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(), { "get_IsDebug", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::__cordl_internal_get_certainty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::__cordl_internal_get_certainty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::__cordl_internal_set_certainty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certainty = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::__cordl_internal_get_countSmallPrimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countSmallPrimes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::__cordl_internal_get_countSmallPrimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countSmallPrimes;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::__cordl_internal_set_countSmallPrimes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___countSmallPrimes = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty,
                                                                                               int32_t countSmallPrimes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random, strength, certainty, countSmallPrimes);
}
inline void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty,
                                                                                               int32_t countSmallPrimes, bool debug) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random, strength, certainty, countSmallPrimes, debug);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::get_Certainty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(), { "get_Certainty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::get_CountSmallPrimes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(), { "get_CountSmallPrimes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::get_IsDebug() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(), { "get_IsDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty,
                                                                                      int32_t countSmallPrimes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(random, strength, certainty, countSmallPrimes));
}
inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty,
                                                                                      int32_t countSmallPrimes, bool debug) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*>(random, strength, certainty, countSmallPrimes, debug));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters::NaccacheSternKeyGenerationParameters() {}
