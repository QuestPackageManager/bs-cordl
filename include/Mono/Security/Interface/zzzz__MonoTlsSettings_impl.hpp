#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsSettings.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* (
    ::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                 "get_RemoteCertificateValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_RemoteCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(
    ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)>(&::Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_RemoteCertificateValidationCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_ClientCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* (
    ::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_ClientCertificateSelectionCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_ClientCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(
    ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(&::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_ClientCertificateSelectionCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_UseServicePointManagerCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_UseServicePointManagerCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_UseServicePointManagerCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<bool>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_UseServicePointManagerCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CallbackNeedsCertificateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_CallbackNeedsCertificateChain",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateValidationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c46490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_CertificateValidationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_CertificateValidationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<::System::DateTime>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4649c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_CertificateValidationTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_TrustAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (
    ::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_TrustAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_TrustAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_TrustAnchors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_UserSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_UserSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_UserSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_UserSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Object*)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_UserSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_UserSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateSearchPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_CertificateSearchPaths", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_CertificateSearchPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_CertificateSearchPaths", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_SendCloseNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_SendCloseNotify", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_SendCloseNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(bool)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c464dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_SendCloseNotify",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_ClientCertificateIssuers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_ClientCertificateIssuers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_ClientCertificateIssuers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_ClientCertificateIssuers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_DisallowUnauthenticatedCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c464f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                 "get_DisallowUnauthenticatedCertificateRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_DisallowUnauthenticatedCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(bool)>(
    &::Mono::Security::Interface::MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c46500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_DisallowUnauthenticatedCertificateRequest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_EnabledProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4650c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_EnabledProtocols", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_EnabledProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(
    ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>)>(&::Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_EnabledProtocols", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_EnabledCiphers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> (
    ::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_EnabledCiphers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_EnabledCiphers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(
    ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>)>(&::Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c46524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_EnabledCiphers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c4652c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_DefaultSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3c46540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_DefaultSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.CopyDefaultSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c465cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "CopyDefaultSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateValidator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::ICertificateValidator* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4663c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                               "get_CertificateValidator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.CloneWithValidator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (
    ::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::ICertificateValidator*)>(&::Mono::Security::Interface::MonoTlsSettings::CloneWithValidator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3c46644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "CloneWithValidator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::ICertificateValidator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::Mono::Security::Interface::MonoTlsSettings::*)()>(
    &::Mono::Security::Interface::MonoTlsSettings::Clone)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c465e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Security::Interface::MonoTlsSettings::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3c466c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RemoteCertificateValidationCallback_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClientCertificateSelectionCallback_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrustAnchors_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UserSettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__CertificateSearchPaths_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateSearchPaths_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__CertificateSearchPaths_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateSearchPaths_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__CertificateSearchPaths_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CertificateSearchPaths_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__ClientCertificateIssuers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateIssuers_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__ClientCertificateIssuers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateIssuers_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__ClientCertificateIssuers_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClientCertificateIssuers_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>&
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__EnabledCiphers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledCiphers_k__BackingField;
}
constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> const&
Mono::Security::Interface::MonoTlsSettings::__cordl_internal_get__EnabledCiphers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledCiphers_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsSettings::__cordl_internal_set__EnabledCiphers_k__BackingField(
    ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EnabledCiphers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateValidator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Interface::MonoTlsSettings::setStaticF_defaultSettings(::Mono::Security::Interface::MonoTlsSettings* value) {
  ::cordl_internals::setStaticField<::Mono::Security::Interface::MonoTlsSettings*, "defaultSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get>(
      std::forward<::Mono::Security::Interface::MonoTlsSettings*>(value));
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::getStaticF_defaultSettings() {
  return ::cordl_internals::getStaticField<::Mono::Security::Interface::MonoTlsSettings*, "defaultSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get>();
}
inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_RemoteCertificateValidationCallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_RemoteCertificateValidationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_ClientCertificateSelectionCallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_ClientCertificateSelectionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_UseServicePointManagerCallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_UseServicePointManagerCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "get_CallbackNeedsCertificateChain",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_CertificateValidationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_CertificateValidationTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_TrustAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_TrustAnchors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* Mono::Security::Interface::MonoTlsSettings::get_UserSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_UserSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_UserSettings(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_UserSettings",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_CertificateSearchPaths", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_CertificateSearchPaths", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_SendCloseNotify", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_SendCloseNotify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateIssuers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_ClientCertificateIssuers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateIssuers(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_ClientCertificateIssuers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Mono::Security::Interface::MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                               "get_DisallowUnauthenticatedCertificateRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_DisallowUnauthenticatedCertificateRequest",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_EnabledProtocols", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_EnabledProtocols", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_EnabledCiphers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers(::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "set_EnabledCiphers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Interface::MonoTlsSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_DefaultSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(nullptr, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "CopyDefaultSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(nullptr, ___internal_method);
}
inline ::Mono::Security::Interface::ICertificateValidator* Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                             "get_CertificateValidator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ICertificateValidator*, false>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::CloneWithValidator(::Mono::Security::Interface::ICertificateValidator* validator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "CloneWithValidator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::ICertificateValidator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(this, ___internal_method, validator);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsSettings::_ctor(::Mono::Security::Interface::MonoTlsSettings* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Interface::MonoTlsSettings*>());
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::New_ctor(::Mono::Security::Interface::MonoTlsSettings* other) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Interface::MonoTlsSettings*>(other));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoTlsSettings::MonoTlsSettings() {}
