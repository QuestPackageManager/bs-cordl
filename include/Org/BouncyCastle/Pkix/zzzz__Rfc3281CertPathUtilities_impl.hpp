#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__Rfc3281CertPathUtilities_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__ReasonsMask_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixCertPath*,
                                                                                           ::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert7)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x1119ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert7", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.CheckCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*,
                                                                                           ::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrls)> {
  constexpr static std::size_t size = 0xc94;
  constexpr static std::size_t addrs = 0x111a290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "CheckCrls", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.AdditionalChecks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::AdditionalChecks)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x111b724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "AdditionalChecks", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert5)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x111befc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert5", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert4)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x111c0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert4", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert3)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x111c540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert3", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
        &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x111c650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert2", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.ProcessAttrCert1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::PkixCertPath* (*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
        &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert1)> {
  constexpr static std::size_t size = 0xc40;
  constexpr static std::size_t addrs = 0x111c790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert1", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities.CheckCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::System::DateTime,
                         ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::CertStatus*, ::Org::BouncyCastle::Pkix::ReasonsMask*, ::System::Collections::IList*)>(
        &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrl)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x111af24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "CheckCrl", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::ReasonsMask*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::*)()>(
    &::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x111d3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert7(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                ::Org::BouncyCastle::Pkix::PkixCertPath* holderCertPath, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert7", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attrCert, certPath, holderCertPath, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrls(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                         ::Org::BouncyCastle::X509::X509Certificate* issuerCert, ::System::DateTime validDate,
                                                                         ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "CheckCrls", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attrCert, paramsPKIX, issuerCert, validDate, certPathCerts);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::AdditionalChecks(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "AdditionalChecks", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attrCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert5(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert5", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attrCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert4(::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert4", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acIssuerCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert3(::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert3", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acIssuerCert, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                                                                   ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*, false>(nullptr, ___internal_method, certPath, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPath* Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert1(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                                                                                                                    ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "ProcessAttrCert1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPath*, false>(nullptr, ___internal_method, attrCert, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                                                                        ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::System::DateTime validDate,
                                                                        ::Org::BouncyCastle::X509::X509Certificate* issuerCert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus,
                                                                        ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(), "CheckCrl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::ReasonsMask*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, attrCert, paramsPKIX, validDate, issuerCert, certStatus, reasonMask, certPathCerts);
}
inline ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities* Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>());
}
inline void Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::Rfc3281CertPathUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
