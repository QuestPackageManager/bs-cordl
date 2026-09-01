#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatSaberX509CertificateUtility.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberX509CertificateUtility_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberX509CertificateUtility.GetRootCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> (*)()>(
    &::GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificates)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32a893c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberX509CertificateUtility*>(), { "GetRootCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberX509CertificateUtility.GetRootCertificatesRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificatesRaw)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x32a8a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberX509CertificateUtility*>(), { "GetRootCertificatesRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberX509CertificateUtility._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberX509CertificateUtility::*)()>(&::GlobalNamespace::BeatSaberX509CertificateUtility::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a8b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberX509CertificateUtility*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatSaberX509CertificateUtility::setStaticF_kBeatSaberDotComRootCertificate(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::GlobalNamespace::BeatSaberX509CertificateUtility*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BeatSaberX509CertificateUtility::getStaticF_kBeatSaberDotComRootCertificate() {
  return ::cordl_internals::getStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::GlobalNamespace::BeatSaberX509CertificateUtility*>();
}
inline void GlobalNamespace::BeatSaberX509CertificateUtility::setStaticF__rootCertificates(::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>, "_rootCertificates", ::GlobalNamespace::BeatSaberX509CertificateUtility*>(
      std::forward<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> GlobalNamespace::BeatSaberX509CertificateUtility::getStaticF__rootCertificates() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>, "_rootCertificates", ::GlobalNamespace::BeatSaberX509CertificateUtility*>();
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberX509CertificateUtility*>(), { "GetRootCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatSaberX509CertificateUtility::GetRootCertificatesRaw() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberX509CertificateUtility*>(), { "GetRootCertificatesRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BeatSaberX509CertificateUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberX509CertificateUtility*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberX509CertificateUtility* GlobalNamespace::BeatSaberX509CertificateUtility::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberX509CertificateUtility*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberX509CertificateUtility::BeatSaberX509CertificateUtility() {}
