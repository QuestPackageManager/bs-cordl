#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cmp\CertificateConfirmationContentBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContentBuilder_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContent_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x36a1bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*)>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36a1c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder.AddAcceptedCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* (
    ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::AddAcceptedCertificate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x36a1cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(),
                            { "AddAcceptedCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::CertificateConfirmationContent* (::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::Build)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x36a1dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_get_digestAlgFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* const& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_get_digestAlgFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgFinder = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_get_acceptedCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedCerts;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_get_acceptedCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedCerts;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_set_acceptedCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acceptedCerts = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_get_acceptedReqIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedReqIds;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_get_acceptedReqIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedReqIds;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__cordl_internal_set_acceptedReqIds(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acceptedReqIds = value;
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder", ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(
      std::forward<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(value));
}
inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::getStaticF_sigAlgFinder() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder", ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>();
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestAlgFinder);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*
Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::AddAcceptedCertificate(::Org::BouncyCastle::X509::X509Certificate* certHolder, ::Org::BouncyCastle::Math::BigInteger* certReqId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(),
                                       { "AddAcceptedCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(this, ___internal_method, certHolder, certReqId);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>());
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*
Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(digestAlgFinder));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::CertificateConfirmationContentBuilder() {}
