#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/CertificateStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateStatus::*)(
    ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*, ::Org::BouncyCastle::Asn1::Cmp::CertStatus*)>(&::Org::BouncyCastle::Cmp::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertStatus*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.get_PkiStatusInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Cmp::CertificateStatus::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateStatus::get_PkiStatusInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x369ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(), { "get_PkiStatusInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.get_CertRequestId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Cmp::CertificateStatus::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateStatus::get_CertRequestId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x369ffb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(), { "get_CertRequestId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.IsVerified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cmp::CertificateStatus::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cmp::CertificateStatus::IsVerified)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x369ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(), { "IsVerified", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_digestAlgFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* const& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_digestAlgFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr void Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgFinder = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus*& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_certStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus* const& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_certStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr void Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Cmp::CertStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certStatus = value;
}
inline void Org::BouncyCastle::Cmp::CertificateStatus::setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder", ::Org::BouncyCastle::Cmp::CertificateStatus*>(
      std::forward<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(value));
}
inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* Org::BouncyCastle::Cmp::CertificateStatus::getStaticF_sigAlgFinder() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder", ::Org::BouncyCastle::Cmp::CertificateStatus*>();
}
inline void Org::BouncyCastle::Cmp::CertificateStatus::_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder,
                                                             ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertStatus*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestAlgFinder, certStatus);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Cmp::CertificateStatus::get_PkiStatusInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(), { "get_PkiStatusInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Cmp::CertificateStatus::get_CertRequestId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(), { "get_CertRequestId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::CertificateStatus::IsVerified(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateStatus*>(), { "IsVerified", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Cmp::CertificateStatus* Org::BouncyCastle::Cmp::CertificateStatus::New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder,
                                                                                                        ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::CertificateStatus*>(digestAlgFinder, certStatus));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::CertificateStatus::CertificateStatus() {}
