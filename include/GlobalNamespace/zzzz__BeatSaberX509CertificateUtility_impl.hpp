#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberX509CertificateUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberX509CertificateUtility_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberX509CertificateUtility.GetRootCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> (*)()>(
        &::GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificates)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x31a1f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get(),
                                                                               "GetRootCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberX509CertificateUtility.GetRootCertificatesRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificatesRaw)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x31a2018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get(),
                                                                               "GetRootCertificatesRaw", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberX509CertificateUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberX509CertificateUtility::*)()>(
    &::GlobalNamespace::BeatSaberX509CertificateUtility::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a20d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatSaberX509CertificateUtility::setStaticF_kBeatSaberDotComRootCertificate(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BeatSaberX509CertificateUtility::getStaticF_kBeatSaberDotComRootCertificate() {
  return ::cordl_internals::getStaticField<::StringW, "kBeatSaberDotComRootCertificate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get>();
}
inline void GlobalNamespace::BeatSaberX509CertificateUtility::setStaticF__rootCertificates(
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>,
                                    "_rootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get>(
      std::forward<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
GlobalNamespace::BeatSaberX509CertificateUtility::getStaticF__rootCertificates() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>, "_rootCertificates",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get>();
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get(),
                                                                             "GetRootCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>, false>(nullptr,
                                                                                                                                                                               ___internal_method);
}
inline ::StringW GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificatesRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get(),
                                                                             "GetRootCertificatesRaw", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BeatSaberX509CertificateUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberX509CertificateUtility*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberX509CertificateUtility* GlobalNamespace::BeatSaberX509CertificateUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberX509CertificateUtility*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberX509CertificateUtility::BeatSaberX509CertificateUtility() {}
