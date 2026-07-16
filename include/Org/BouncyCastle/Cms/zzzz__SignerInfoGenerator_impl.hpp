#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/SignerInfoGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::Cms::SignerInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d17c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::Org::BouncyCastle::Crypto::ISignatureFactory*, bool)>(&::Org::BouncyCastle::Cms::SignerInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36d17c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::SignerInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36d1854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGenerator.setAssociatedCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInfoGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::SignerInfoGenerator::setAssociatedCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d1864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
                                                                                           { "setAssociatedCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_set_certificate(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificate = value;
}
constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_contentSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentSigner;
}
constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory* const& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_contentSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentSigner;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_set_contentSigner(::Org::BouncyCastle::Crypto::ISignatureFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentSigner = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_sigId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigId;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* const& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_sigId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigId;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_set_sigId(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigId = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_signedGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedGen;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_signedGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedGen;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedGen = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_unsignedGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedGen;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_unsignedGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedGen;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsignedGen = value;
}
constexpr bool& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_isDirectSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirectSignature;
}
constexpr bool const& Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_get_isDirectSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirectSignature;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGenerator::__cordl_internal_set_isDirectSignature(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDirectSignature = value;
}
inline void Org::BouncyCastle::Cms::SignerInfoGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigId, signerFactory);
}
inline void Org::BouncyCastle::Cms::SignerInfoGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory,
                                                               bool isDirectSignature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigId, signerFactory, isDirectSignature);
}
inline void Org::BouncyCastle::Cms::SignerInfoGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                               ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigId, contentSigner, signedGen, unsignedGen);
}
inline void Org::BouncyCastle::Cms::SignerInfoGenerator::setAssociatedCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(),
                                                                                         { "setAssociatedCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId,
                                                                                                            ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(sigId, signerFactory));
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId,
                                                                                                            ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory, bool isDirectSignature) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(sigId, signerFactory, isDirectSignature));
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId,
                                                                                                            ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen,
                                                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(sigId, contentSigner, signedGen, unsignedGen));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SignerInfoGenerator::SignerInfoGenerator() {}
