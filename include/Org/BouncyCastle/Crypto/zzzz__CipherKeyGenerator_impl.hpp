#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\CipherKeyGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)()>(&::Org::BouncyCastle::Crypto::CipherKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33d5148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)(int32_t)>(&::Org::BouncyCastle::Crypto::CipherKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33d5154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator.get_DefaultStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)()>(&::Org::BouncyCastle::Crypto::CipherKeyGenerator::get_DefaultStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33d51d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { "get_DefaultStrength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(
    &::Org::BouncyCastle::Crypto::CipherKeyGenerator::Init)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x33d51d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator.engineInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(
    &::Org::BouncyCastle::Crypto::CipherKeyGenerator::engineInit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x33d5238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator.GenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)()>(&::Org::BouncyCastle::Crypto::CipherKeyGenerator::GenerateKey)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33d526c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { "GenerateKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::CipherKeyGenerator.engineGenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::CipherKeyGenerator::*)()>(&::Org::BouncyCastle::Crypto::CipherKeyGenerator::engineGenerateKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x33d5384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr void Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_set_strength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strength = value;
}
constexpr bool& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_uninitialised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uninitialised;
}
constexpr bool const& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_uninitialised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uninitialised;
}
constexpr void Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_set_uninitialised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uninitialised = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_defaultStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_get_defaultStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultStrength;
}
constexpr void Org::BouncyCastle::Crypto::CipherKeyGenerator::__cordl_internal_set_defaultStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultStrength = value;
}
inline void Org::BouncyCastle::Crypto::CipherKeyGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::CipherKeyGenerator::_ctor(int32_t defaultStrength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultStrength);
}
inline int32_t Org::BouncyCastle::Crypto::CipherKeyGenerator::get_DefaultStrength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { "get_DefaultStrength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::CipherKeyGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::CipherKeyGenerator::engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::CipherKeyGenerator::GenerateKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), { "GenerateKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::CipherKeyGenerator::engineGenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Crypto::CipherKeyGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>());
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Crypto::CipherKeyGenerator::New_ctor(int32_t defaultStrength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(defaultStrength));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::CipherKeyGenerator::CipherKeyGenerator() {}
