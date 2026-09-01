#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\Pkcs5S2ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Pkcs5S2ParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x33e2f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x33e2f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.F
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(
    ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::F)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x33e3094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
            { "F", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.GenerateDerivedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedKey)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x33e3458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), { "GenerateDerivedKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33e3690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(::StringW, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33e369c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x33e3738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(::StringW, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x33e3820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator.GenerateDerivedMacParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedMacParameters)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x33e3924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::__cordl_internal_get_hMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::__cordl_internal_get_hMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMac;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::__cordl_internal_set_hMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hMac = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::__cordl_internal_set_state(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::F(::ArrayW<uint8_t> S, int32_t c, ::ArrayW<uint8_t> iBuf, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(),
          { "F", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, S, c, iBuf, outBytes, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedKey(int32_t dkLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), { "GenerateDerivedKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, dkLen);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters(int32_t keySize, int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize,
                                                                                                                                                    int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedMacParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>());
}
inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator* Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::Pkcs5S2ParametersGenerator() {}
