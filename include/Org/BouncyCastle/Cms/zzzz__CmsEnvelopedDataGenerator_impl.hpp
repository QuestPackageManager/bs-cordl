#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedDataGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36a7b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x36a7bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsEnvelopedData* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x36a7c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsEnvelopedData* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x36a881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsEnvelopedData* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0xc98;
  constexpr static std::size_t addrs = 0x36a89cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsEnvelopedData* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW, int32_t)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x36a9664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                                { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid,
                                                                                                               ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsEnvelopedData*>(this, ___internal_method, content, encryptionOid, keyGen);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsEnvelopedData*>(this, ___internal_method, content, encryptionOid);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content,
                                                                                                               ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* cipherBuilder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                       { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsEnvelopedData*>(this, ___internal_method, content, cipherBuilder);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid,
                                                                                                               int32_t keySize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(),
                                              { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsEnvelopedData*>(this, ___internal_method, content, encryptionOid, keySize);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator::CmsEnvelopedDataGenerator() {}
