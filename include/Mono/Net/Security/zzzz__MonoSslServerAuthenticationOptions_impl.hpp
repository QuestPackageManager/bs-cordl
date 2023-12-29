#pragma once
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoSslServerAuthenticationOptions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Net/Security/zzzz__SslServerAuthenticationOptions_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslServerAuthenticationOptions* (
    ::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a9174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "get_Options",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ServerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a917c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26a6638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a9184;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a91a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a91bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(
    ::System::Security::Authentication::SslProtocols)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a91d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a91f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(bool)>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26a9210;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26a9230;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::StringW)>(
    &::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26a9270;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a92b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_ServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a92cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (
    ::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26a92e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26a9328;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), 14));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SslServerAuthenticationOptions*& Mono::Net::Security::MonoSslServerAuthenticationOptions::__get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslServerAuthenticationOptions*> const&
Mono::Net::Security::MonoSslServerAuthenticationOptions::__get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Mono::Net::Security::MonoSslServerAuthenticationOptions::__set__Options_k__BackingField(::System::Net::Security::SslServerAuthenticationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Options_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Security::SslServerAuthenticationOptions* Mono::Net::Security::MonoSslServerAuthenticationOptions::get_Options() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_Options", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslServerAuthenticationOptions*, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_ServerMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::MonoSslServerAuthenticationOptions* Mono::Net::Security::MonoSslServerAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>());
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_CertificateRevocationCheckMode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_EncryptionPolicy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols Mono::Net::Security::MonoSslServerAuthenticationOptions::get_EnabledSslProtocols() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_EnabledSslProtocols", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_EnabledSslProtocols", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificateRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_ClientCertificateRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificateRequired(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_ClientCertificateRequired",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Mono::Net::Security::MonoSslServerAuthenticationOptions::get_TargetHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_TargetHost", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_TargetHost(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_TargetHost",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_ServerCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_ServerCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(),
                                                                             "get_ClientCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions*>::get(), "set_ClientCertificates", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoSslServerAuthenticationOptions::MonoSslServerAuthenticationOptions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
