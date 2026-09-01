#pragma once
// IWYU pragma private; include "Mono\Security\Interface\MonoTlsSettings.hpp"
#include "Mono/Security/Interface/zzzz__CipherSuiteCode_impl.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Security/Interface/zzzz__CipherSuiteCode_def.hpp"
#include "Mono/Security/Interface/zzzz__ICertificateValidator_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoLocalCertificateSelectionCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoRemoteCertificateValidationCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_RemoteCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_RemoteCertificateValidationCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_RemoteCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                { "set_RemoteCertificateValidationCallback", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_ClientCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_ClientCertificateSelectionCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_ClientCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                { "set_ClientCertificateSelectionCallback", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_UseServicePointManagerCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_UseServicePointManagerCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_UseServicePointManagerCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<bool>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                           { "set_UseServicePointManagerCallback", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CallbackNeedsCertificateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CallbackNeedsCertificateChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateValidationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a9e224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CertificateValidationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_CertificateValidationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<::System::DateTime>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                           { "set_CertificateValidationTime", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_TrustAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_TrustAnchors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_TrustAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                             { "set_TrustAnchors", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_UserSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_UserSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_UserSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_UserSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Object*)>(&::Mono::Security::Interface::MonoTlsSettings::set_UserSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_UserSettings", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateSearchPaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CertificateSearchPaths", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_CertificateSearchPaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::StringW>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_CertificateSearchPaths", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_SendCloseNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_SendCloseNotify", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_SendCloseNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(bool)>(&::Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_SendCloseNotify", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_ClientCertificateIssuers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_ClientCertificateIssuers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_ClientCertificateIssuers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::StringW>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_ClientCertificateIssuers", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_DisallowUnauthenticatedCertificateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_DisallowUnauthenticatedCertificateRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_DisallowUnauthenticatedCertificateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(bool)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_DisallowUnauthenticatedCertificateRequest", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_EnabledProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_EnabledProtocols", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_EnabledProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                             { "set_EnabledProtocols", {}, { ::i2c::type_of<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_EnabledCiphers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Mono::Security::Interface::CipherSuiteCode> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_EnabledCiphers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_EnabledCiphers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::Mono::Security::Interface::CipherSuiteCode>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                             { "set_EnabledCiphers", {}, { ::i2c::type_of<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a9e2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_DefaultSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a9e2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_DefaultSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.CopyDefaultSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (*)()>(&::Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a9e350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "CopyDefaultSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::ICertificateValidator* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CertificateValidator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.CloneWithValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (
    ::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::ICertificateValidator*)>(&::Mono::Security::Interface::MonoTlsSettings::CloneWithValidator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a9e3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                           { "CloneWithValidator", {}, { ::i2c::type_of<::Mono::Security::Interface::ICertificateValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a9e368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Security::Interface::MonoTlsSettings::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a9e44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*&
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RemoteCertificateValidationCallback_k__BackingField;
}
constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* const&
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RemoteCertificateValidationCallback_k__BackingField;
}
constexpr void
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RemoteCertificateValidationCallback_k__BackingField = value;
}
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateSelectionCallback_k__BackingField;
}
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* const&
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateSelectionCallback_k__BackingField;
}
constexpr void
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__ClientCertificateSelectionCallback_k__BackingField(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientCertificateSelectionCallback_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__CertificateValidationTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateValidationTime_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__CertificateValidationTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateValidationTime_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__CertificateValidationTime_k__BackingField(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CertificateValidationTime_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__TrustAnchors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrustAnchors_k__BackingField;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__TrustAnchors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrustAnchors_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__TrustAnchors_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TrustAnchors_k__BackingField = value;
}
constexpr ::System::Object*& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__UserSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserSettings_k__BackingField;
}
constexpr ::System::Object* const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__UserSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserSettings_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__UserSettings_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UserSettings_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__CertificateSearchPaths_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateSearchPaths_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__CertificateSearchPaths_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateSearchPaths_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__CertificateSearchPaths_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CertificateSearchPaths_k__BackingField = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__SendCloseNotify_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendCloseNotify_k__BackingField;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__SendCloseNotify_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendCloseNotify_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__SendCloseNotify_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SendCloseNotify_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__ClientCertificateIssuers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateIssuers_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__ClientCertificateIssuers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateIssuers_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__ClientCertificateIssuers_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientCertificateIssuers_k__BackingField = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisallowUnauthenticatedCertificateRequest_k__BackingField;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisallowUnauthenticatedCertificateRequest_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__DisallowUnauthenticatedCertificateRequest_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DisallowUnauthenticatedCertificateRequest_k__BackingField = value;
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__EnabledProtocols_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledProtocols_k__BackingField;
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__EnabledProtocols_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledProtocols_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__EnabledProtocols_k__BackingField(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnabledProtocols_k__BackingField = value;
}
constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__EnabledCiphers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledCiphers_k__BackingField;
}
constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__EnabledCiphers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledCiphers_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__EnabledCiphers_k__BackingField(::ArrayW<::Mono::Security::Interface::CipherSuiteCode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnabledCiphers_k__BackingField = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_cloned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cloned;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_cloned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cloned;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_cloned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cloned = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_checkCertName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCertName;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_checkCertName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCertName;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_checkCertName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCertName = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_checkCertRevocationStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCertRevocationStatus;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_checkCertRevocationStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCertRevocationStatus;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_checkCertRevocationStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCertRevocationStatus = value;
}
constexpr ::System::Nullable_1<bool>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_useServicePointManagerCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useServicePointManagerCallback;
}
constexpr ::System::Nullable_1<bool> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_useServicePointManagerCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useServicePointManagerCallback;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_useServicePointManagerCallback(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useServicePointManagerCallback = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_skipSystemValidators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipSystemValidators;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_skipSystemValidators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipSystemValidators;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_skipSystemValidators(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skipSystemValidators = value;
}
constexpr bool& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_callbackNeedsChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackNeedsChain;
}
constexpr bool const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_callbackNeedsChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackNeedsChain;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_callbackNeedsChain(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callbackNeedsChain = value;
}
constexpr ::Mono::Security::Interface::ICertificateValidator*& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_certificateValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateValidator;
}
constexpr ::Mono::Security::Interface::ICertificateValidator* const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get_certificateValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateValidator;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set_certificateValidator(::Mono::Security::Interface::ICertificateValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificateValidator = value;
}
inline void Mono::Security::Interface::MonoTlsSettings::setStaticF_defaultSettings(::Mono::Security::Interface::MonoTlsSettings* value) {
  ::cordl_internals::setStaticField<::Mono::Security::Interface::MonoTlsSettings*, "defaultSettings", ::Mono::Security::Interface::MonoTlsSettings*>(
      std::forward<::Mono::Security::Interface::MonoTlsSettings*>(value));
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::getStaticF_defaultSettings() {
  return ::cordl_internals::getStaticField<::Mono::Security::Interface::MonoTlsSettings*, "defaultSettings", ::Mono::Security::Interface::MonoTlsSettings*>();
}
inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_RemoteCertificateValidationCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                              { "set_RemoteCertificateValidationCallback", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_ClientCertificateSelectionCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                              { "set_ClientCertificateSelectionCallback", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_UseServicePointManagerCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                         { "set_UseServicePointManagerCallback", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CallbackNeedsCertificateChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CertificateValidationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                         { "set_CertificateValidationTime", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_TrustAnchors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                           { "set_TrustAnchors", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Mono::Security::Interface::MonoTlsSettings::get_UserSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_UserSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_UserSettings(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_UserSettings", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CertificateSearchPaths", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths(::ArrayW<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_CertificateSearchPaths", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_SendCloseNotify", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_SendCloseNotify", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateIssuers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_ClientCertificateIssuers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateIssuers(::ArrayW<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_ClientCertificateIssuers", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Security::Interface::MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_DisallowUnauthenticatedCertificateRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "set_DisallowUnauthenticatedCertificateRequest", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_EnabledProtocols", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                           { "set_EnabledProtocols", {}, { ::i2c::type_of<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Mono::Security::Interface::CipherSuiteCode> Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_EnabledCiphers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers(::ArrayW<::Mono::Security::Interface::CipherSuiteCode> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                         { "set_EnabledCiphers", {}, { ::i2c::type_of<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Interface::MonoTlsSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_DefaultSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(nullptr, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "CopyDefaultSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(nullptr, ___internal_method);
}
inline ::Mono::Security::Interface::ICertificateValidator* Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "get_CertificateValidator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ICertificateValidator*>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::CloneWithValidator(::Mono::Security::Interface::ICertificateValidator* validator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(),
                                                                                         { "CloneWithValidator", {}, { ::i2c::type_of<::Mono::Security::Interface::ICertificateValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(this, ___internal_method, validator);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::_ctor(::Mono::Security::Interface::MonoTlsSettings* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsSettings*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::MonoTlsSettings*>());
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::New_ctor(::Mono::Security::Interface::MonoTlsSettings* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::MonoTlsSettings*>(other));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoTlsSettings::MonoTlsSettings() {}
