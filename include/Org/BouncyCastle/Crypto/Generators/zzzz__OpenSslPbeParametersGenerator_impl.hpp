#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\OpenSslPbeParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__OpenSslPbeParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33e1184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e11e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e11e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.GenerateDerivedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedKey)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x33e11f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), { "GenerateDerivedKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33e1578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::StringW, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33e1584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x33e1620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::StringW, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x33e1708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator.GenerateDerivedMacParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedMacParameters)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x33e180c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
inline void Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterationCount);
}
inline void Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedKey(int32_t bytesNeeded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), { "GenerateDerivedKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, bytesNeeded);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters(int32_t keySize, int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize,
                                                                                                                                                       int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedMacParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator* Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::OpenSslPbeParametersGenerator() {}
