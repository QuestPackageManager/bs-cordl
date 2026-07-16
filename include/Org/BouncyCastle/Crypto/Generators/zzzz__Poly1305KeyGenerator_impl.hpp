#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Poly1305KeyGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Poly1305KeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator.engineInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::engineInit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e1634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator.engineGenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::engineGenerateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33e1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator.Clamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::Clamp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33e1670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), { "Clamp", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator.CheckKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::CheckKey)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x33e172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), { "CheckKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator.CheckMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::CheckMask)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33e1834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(),
                                                                                           { "CheckMask", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33e1890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* param) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::engineGenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::Clamp(::ArrayW<uint8_t> key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), { "Clamp", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::CheckKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), { "CheckKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::CheckMask(uint8_t b, uint8_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(),
                                                                                         { "CheckMask", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b, mask);
}
inline void Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator* Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator::Poly1305KeyGenerator() {}
