#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Operators/CmsKeyTransRecipientInfoGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_impl.hpp"
#include "Org/BouncyCastle/Operators/zzzz__CmsKeyTransRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Crypto::IKeyWrapper*)>(&::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3408ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::IKeyWrapper*)>(
    &::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3408c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)()>(
    &::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3408c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator.GenerateWrappedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::GenerateWrappedKey)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3408d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__cordl_internal_get_keyWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyWrapper;
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__cordl_internal_get_keyWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyWrapper;
}
constexpr void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__cordl_internal_set_keyWrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyWrapper = value;
}
inline void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recipCert, keyWrapper);
}
inline void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor(::ArrayW<uint8_t> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyID, keyWrapper);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::get_AlgorithmDetails() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentKey) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, contentKey);
}
inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*
Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::New_ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(recipCert, keyWrapper));
}
inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*
Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::New_ctor(::ArrayW<uint8_t> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(subjectKeyID, keyWrapper));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::CmsKeyTransRecipientInfoGenerator() {}
