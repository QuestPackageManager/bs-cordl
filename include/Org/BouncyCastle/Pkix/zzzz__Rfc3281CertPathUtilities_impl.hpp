#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/Rfc3281CertPathUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__Rfc3281CertPathUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__ReasonsMask_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixCertPath*,
                                                                ::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert7)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x35e95c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                                             { "ProcessAttrCert7",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.CheckCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*,
                                                                ::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrls)> {
  constexpr static std::size_t size = 0xc84;
  constexpr static std::size_t addrs = 0x35e9c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                            { "CheckCrls",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.AdditionalChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::AdditionalChecks)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x35eb14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                            { "AdditionalChecks", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert5)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x35eb8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                            { "ProcessAttrCert5", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert4)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x35eba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                         { "ProcessAttrCert4", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert3)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x35ebed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                         { "ProcessAttrCert3", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
        &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert2)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x35ebfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                         { "ProcessAttrCert2", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPath* (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert1)> {
  constexpr static std::size_t size = 0xc2c;
  constexpr static std::size_t addrs = 0x35ec114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                            { "ProcessAttrCert1", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.CheckCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::System::DateTime,
                         ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::CertStatus*, ::Org::BouncyCastle::Pkix::ReasonsMask*, ::System::Collections::IList*)>(
        &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrl)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x35ea91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                                { "CheckCrl",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::System::DateTime>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::*)()>(&::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35ecd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert7(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                ::Org::BouncyCastle::Pkix::PkixCertPath* holderCertPath, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                                           { "ProcessAttrCert7",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attrCert, certPath, holderCertPath, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrls(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                         ::Org::BouncyCastle::X509::X509Certificate* issuerCert, ::System::DateTime validDate,
                                                                         ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                       { "CheckCrls",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attrCert, paramsPKIX, issuerCert, validDate, certPathCerts);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::AdditionalChecks(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                          { "AdditionalChecks", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attrCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert5(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                          { "ProcessAttrCert5", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attrCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert4(::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                       { "ProcessAttrCert4", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, acIssuerCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert3(::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                       { "ProcessAttrCert3", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, acIssuerCert, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                                                                   ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                       { "ProcessAttrCert2", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*>(nullptr, ___internal_method, certPath, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPath* Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert1(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                                                                                                                    ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                          { "ProcessAttrCert1", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPath*>(nullptr, ___internal_method, attrCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                                                                        ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::System::DateTime validDate,
                                                                        ::Org::BouncyCastle::X509::X509Certificate* issuerCert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus,
                                                                        ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(),
                                              { "CheckCrl",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::System::DateTime>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dp, attrCert, paramsPKIX, validDate, issuerCert, certStatus, reasonMask, certPathCerts);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities* Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::Rfc3281CertPathUtilities() {}
