#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsAuthenticatedDataGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a5e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a5e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsAuthenticatedData* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0xb28;
  constexpr static std::size_t addrs = 0x36a5e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(),
            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsAuthenticatedData* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x36a698c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW macOid,
                                                                                                                       ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(),
          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>(this, ___internal_method, content, macOid, keyGen);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>(this, ___internal_method, content, encryptionOid);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::CmsAuthenticatedDataGenerator() {}
