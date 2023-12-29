#pragma once
#include "System/Net/Security/zzzz__EncryptionPolicy_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SslServerAuthenticationOptions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Security::SslServerAuthenticationOptions::*)()>(
    &::System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27815b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                               "get_ClientCertificateRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(bool)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27815c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_ClientCertificateRequired",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_ServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Security::SslServerAuthenticationOptions::*)()>(&::System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27815cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                               "get_ServerCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_ServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27815d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_ServerCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::System::Net::Security::SslServerAuthenticationOptions::*)()>(
    &::System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27815dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                               "get_EnabledSslProtocols", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27815e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_EnabledSslProtocols", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27815ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_CertificateRevocationCheckMode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x278168c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_EncryptionPolicy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)()>(
    &::System::Net::Security::SslServerAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x278172c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& System::Net::Security::SslServerAuthenticationOptions::__get__checkCertificateRevocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& System::Net::Security::SslServerAuthenticationOptions::__get__checkCertificateRevocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkCertificateRevocation = value;
}
constexpr ::System::Security::Authentication::SslProtocols& System::Net::Security::SslServerAuthenticationOptions::__get__enabledSslProtocols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& System::Net::Security::SslServerAuthenticationOptions::__get__enabledSslProtocols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledSslProtocols = value;
}
constexpr ::System::Net::Security::EncryptionPolicy& System::Net::Security::SslServerAuthenticationOptions::__get__encryptionPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr ::System::Net::Security::EncryptionPolicy const& System::Net::Security::SslServerAuthenticationOptions::__get__encryptionPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionPolicy = value;
}
constexpr bool& System::Net::Security::SslServerAuthenticationOptions::__get__allowRenegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr bool const& System::Net::Security::SslServerAuthenticationOptions::__get__allowRenegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__allowRenegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowRenegotiation = value;
}
constexpr bool& System::Net::Security::SslServerAuthenticationOptions::__get__ClientCertificateRequired_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateRequired_k__BackingField;
}
constexpr bool const& System::Net::Security::SslServerAuthenticationOptions::__get__ClientCertificateRequired_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateRequired_k__BackingField;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__ClientCertificateRequired_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientCertificateRequired_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::Security::SslServerAuthenticationOptions::__get__ServerCertificate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerCertificate_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const&
System::Net::Security::SslServerAuthenticationOptions::__get__ServerCertificate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerCertificate_k__BackingField;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__ServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServerCertificate_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                             "get_ClientCertificateRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_ClientCertificateRequired",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                             "get_ServerCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_ServerCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                             "get_EnabledSslProtocols", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_EnabledSslProtocols", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_CertificateRevocationCheckMode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(), "set_EncryptionPolicy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Security::SslServerAuthenticationOptions* System::Net::Security::SslServerAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Security::SslServerAuthenticationOptions*>());
}
inline void System::Net::Security::SslServerAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Security::SslServerAuthenticationOptions::SslServerAuthenticationOptions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
