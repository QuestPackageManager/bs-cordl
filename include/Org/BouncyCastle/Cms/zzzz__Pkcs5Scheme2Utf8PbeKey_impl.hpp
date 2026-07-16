#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/Pkcs5Scheme2Utf8PbeKey.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__Pkcs5Scheme2Utf8PbeKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36d0d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::*)(::StringW, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x36d0dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::*)(::ArrayW<char16_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36d0dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::*)(::ArrayW<char16_t>, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36d0e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::GetEncoded)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x36d0e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterationCount);
}
inline void Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, keyDerivationAlgorithm);
}
inline void Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterationCount);
}
inline void Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::_ctor(::ArrayW<char16_t> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, keyDerivationAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::GetEncoded(::StringW algorithmOid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, algorithmOid);
}
inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::New_ctor(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(password, salt, iterationCount));
}
inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::New_ctor(::StringW password,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(password, keyDerivationAlgorithm));
}
inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::New_ctor(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(password, salt, iterationCount));
}
inline ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey* Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::New_ctor(::ArrayW<char16_t> password,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey*>(password, keyDerivationAlgorithm));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey::Pkcs5Scheme2Utf8PbeKey() {}
